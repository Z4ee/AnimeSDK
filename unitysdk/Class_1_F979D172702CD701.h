#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingSoldierUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F979D172702CD701_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C7D8C50)
#define CLASS_1_F979D172702CD701_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7D8A80)
#define CLASS_1_F979D172702CD701_METHOD_1_A1933FC976D28A29_OFFSET UNITYSDK_OFFSET(0x1C7D8430)
#define CLASS_1_F979D172702CD701_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7D8B10)
#define CLASS_1_F979D172702CD701_METHOD_1_BBB9EF7469B05663_OFFSET UNITYSDK_OFFSET(0x1C7D8CA0)
#define CLASS_1_F979D172702CD701_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7D86E0)
#define CLASS_1_F979D172702CD701_METHOD_1_DB90DC7792A23B68_OFFSET UNITYSDK_OFFSET(0x1C7D88B0)
#define CLASS_1_F979D172702CD701_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7D84B0)
#define CLASS_1_F979D172702CD701_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7D8A40)
#define CLASS_1_F979D172702CD701_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7D8BB0)
#define CLASS_1_F979D172702CD701_METHOD_1_FFD3D389E60F567E_OFFSET UNITYSDK_OFFSET(0x1C7D8740)
#define CLASS_1_F979D172702CD701__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7D9010)

inline static constexpr unsigned int Class_1_F979D172702CD701_TypeDefinitionIndex = 11040;

class Class_1_F979D172702CD701 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierUnitRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierUnitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F979D172702CD701_TypeDefinitionIndex)->GetStaticField(0xD0D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F979D172702CD701_TypeDefinitionIndex)->GetStaticField(0xD0D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F979D172702CD701_TypeDefinitionIndex)->GetStaticField(0xD0E0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F979D172702CD701_TypeDefinitionIndex)->GetStaticField(0x4010);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F979D172702CD701_TypeDefinitionIndex)->GetStaticField(0x4011);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierUnitRow*>* Method_1_A1933FC976D28A29()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierUnitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_A1933FC976D28A29_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierUnitRow*> Method_1_FFD3D389E60F567E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSoldierUnitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_FFD3D389E60F567E_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingSoldierUnitRow* Method_1_DB90DC7792A23B68(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingSoldierUnitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_DB90DC7792A23B68_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_BBB9EF7469B05663(::RPG::GameCore::ChenLingSoldierUnitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingSoldierUnitRow*))((::PBYTE)hIl2Cpp + CLASS_1_F979D172702CD701_METHOD_1_BBB9EF7469B05663_OFFSET))(a1);
	}
};
