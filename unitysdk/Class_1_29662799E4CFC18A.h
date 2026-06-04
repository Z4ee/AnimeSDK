#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightCoreRoleChooseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_29662799E4CFC18A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F45F40)
#define CLASS_1_29662799E4CFC18A_METHOD_1_2E3A7A5D745191ED_OFFSET UNITYSDK_OFFSET(0x18F45B20)
#define CLASS_1_29662799E4CFC18A_METHOD_1_3D4127A83DFD7462_OFFSET UNITYSDK_OFFSET(0x18F459B0)
#define CLASS_1_29662799E4CFC18A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F45D70)
#define CLASS_1_29662799E4CFC18A_METHOD_1_974FA65AEE66ABB9_OFFSET UNITYSDK_OFFSET(0x18F456A0)
#define CLASS_1_29662799E4CFC18A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F45E00)
#define CLASS_1_29662799E4CFC18A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F45950)
#define CLASS_1_29662799E4CFC18A_METHOD_1_CFC4D8252CD5A257_OFFSET UNITYSDK_OFFSET(0x18F45F90)
#define CLASS_1_29662799E4CFC18A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F45720)
#define CLASS_1_29662799E4CFC18A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F45D30)
#define CLASS_1_29662799E4CFC18A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F45EA0)
#define CLASS_1_29662799E4CFC18A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F46360)

inline static constexpr unsigned int Class_1_29662799E4CFC18A_TypeDefinitionIndex = 13044;

class Class_1_29662799E4CFC18A : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29662799E4CFC18A_TypeDefinitionIndex)->GetStaticField(0x351D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29662799E4CFC18A_TypeDefinitionIndex)->GetStaticField(0x351D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29662799E4CFC18A_TypeDefinitionIndex)->GetStaticField(0x351E0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_29662799E4CFC18A_TypeDefinitionIndex)->GetStaticField(0xA760);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_29662799E4CFC18A_TypeDefinitionIndex)->GetStaticField(0xA761);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>* Method_1_974FA65AEE66ABB9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_974FA65AEE66ABB9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*> Method_1_3D4127A83DFD7462()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_3D4127A83DFD7462_OFFSET))();
	}

	static ::RPG::GameCore::GridFightCoreRoleChooseRow* Method_1_2E3A7A5D745191ED(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSrcType a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightCoreRoleChooseRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitSrcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_2E3A7A5D745191ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFC4D8252CD5A257(::RPG::GameCore::GridFightCoreRoleChooseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCoreRoleChooseRow*))((::PBYTE)hIl2Cpp + CLASS_1_29662799E4CFC18A_METHOD_1_CFC4D8252CD5A257_OFFSET))(a1);
	}
};
