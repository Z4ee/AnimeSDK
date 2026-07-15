#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B14AF706EA1B9977_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B56B6C0)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_3490D19CF3D425F1_OFFSET UNITYSDK_OFFSET(0x1B56B1F0)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_572F1A41C97B4C10_OFFSET UNITYSDK_OFFSET(0x1B56B320)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B56B4F0)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_A801F8F60BF58FC2_OFFSET UNITYSDK_OFFSET(0x1B56B710)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B56B580)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B56B190)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B56AF60)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_E33326742E73CBAB_OFFSET UNITYSDK_OFFSET(0x1B56AEE0)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B56B4B0)
#define CLASS_1_B14AF706EA1B9977_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B56B620)
#define CLASS_1_B14AF706EA1B9977__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B56BA30)

inline static constexpr unsigned int Class_1_B14AF706EA1B9977_TypeDefinitionIndex = 12540;

class Class_1_B14AF706EA1B9977 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14AF706EA1B9977_TypeDefinitionIndex)->GetStaticField(0x5B30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14AF706EA1B9977_TypeDefinitionIndex)->GetStaticField(0x5B38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14AF706EA1B9977_TypeDefinitionIndex)->GetStaticField(0x5B40);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14AF706EA1B9977_TypeDefinitionIndex)->GetStaticField(0x3320);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14AF706EA1B9977_TypeDefinitionIndex)->GetStaticField(0x3321);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>* Method_1_E33326742E73CBAB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_E33326742E73CBAB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*> Method_1_3490D19CF3D425F1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraPhaseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_3490D19CF3D425F1_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraPhaseRow* Method_1_572F1A41C97B4C10(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_572F1A41C97B4C10_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A801F8F60BF58FC2(::RPG::GameCore::ChimeraPhaseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraPhaseRow*))((::PBYTE)hIl2Cpp + CLASS_1_B14AF706EA1B9977_METHOD_1_A801F8F60BF58FC2_OFFSET))(a1);
	}
};
