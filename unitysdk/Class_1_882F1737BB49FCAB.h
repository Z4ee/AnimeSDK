#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PSObjectMissionMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_882F1737BB49FCAB_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CEE5E30)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_5AD631EA3885ACB0_OFFSET UNITYSDK_OFFSET(0x1CEE5920)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_745FF48F6398D24A_OFFSET UNITYSDK_OFFSET(0x1CEE5A90)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_8131670C9871ACC9_OFFSET UNITYSDK_OFFSET(0x1CEE5E80)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEE5C60)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_A8E5268236D5BDFB_OFFSET UNITYSDK_OFFSET(0x1CEE5610)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEE5CF0)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEE58C0)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEE5690)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEE5C20)
#define CLASS_1_882F1737BB49FCAB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEE5D90)
#define CLASS_1_882F1737BB49FCAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE61F0)

inline static constexpr unsigned int Class_1_882F1737BB49FCAB_TypeDefinitionIndex = 12976;

class Class_1_882F1737BB49FCAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_882F1737BB49FCAB_TypeDefinitionIndex)->GetStaticField(0x47BF0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_882F1737BB49FCAB_TypeDefinitionIndex)->GetStaticField(0x47BF8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_882F1737BB49FCAB_TypeDefinitionIndex)->GetStaticField(0x47C00);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_882F1737BB49FCAB_TypeDefinitionIndex)->GetStaticField(0x10990);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_882F1737BB49FCAB_TypeDefinitionIndex)->GetStaticField(0x10991);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>* Method_1_A8E5268236D5BDFB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_A8E5268236D5BDFB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*> Method_1_5AD631EA3885ACB0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_5AD631EA3885ACB0_OFFSET))();
	}

	static ::RPG::GameCore::PSObjectMissionMapRow* Method_1_745FF48F6398D24A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PSObjectMissionMapRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_745FF48F6398D24A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8131670C9871ACC9(::RPG::GameCore::PSObjectMissionMapRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PSObjectMissionMapRow*))((::PBYTE)hIl2Cpp + CLASS_1_882F1737BB49FCAB_METHOD_1_8131670C9871ACC9_OFFSET))(a1);
	}
};
