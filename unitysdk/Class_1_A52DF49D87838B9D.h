#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamBuildGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A52DF49D87838B9D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1822F930)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_0FB286E9477489FA_OFFSET UNITYSDK_OFFSET(0x1822F390)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_2831AAB760C747B3_OFFSET UNITYSDK_OFFSET(0x1822F540)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1822F750)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_48ACAF3862CCC727_OFFSET UNITYSDK_OFFSET(0x1822F980)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1822F0E0)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_78BBBB18E16DC1E1_OFFSET UNITYSDK_OFFSET(0x1822F060)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1822F7F0)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1822F330)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1822F710)
#define CLASS_1_A52DF49D87838B9D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1822F890)
#define CLASS_1_A52DF49D87838B9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1822FCE0)

inline static constexpr unsigned int Class_1_A52DF49D87838B9D_TypeDefinitionIndex = 14474;

class Class_1_A52DF49D87838B9D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A52DF49D87838B9D_TypeDefinitionIndex)->GetStaticField(0x22F80);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A52DF49D87838B9D_TypeDefinitionIndex)->GetStaticField(0x22F88);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A52DF49D87838B9D_TypeDefinitionIndex)->GetStaticField(0x22F90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A52DF49D87838B9D_TypeDefinitionIndex)->GetStaticField(0x8E20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A52DF49D87838B9D_TypeDefinitionIndex)->GetStaticField(0x8E21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>* Method_1_78BBBB18E16DC1E1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_78BBBB18E16DC1E1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*> Method_1_0FB286E9477489FA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_0FB286E9477489FA_OFFSET))();
	}

	static ::RPG::GameCore::TeamBuildGroupConfigRow* Method_1_2831AAB760C747B3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TeamBuildGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_2831AAB760C747B3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_48ACAF3862CCC727(::RPG::GameCore::TeamBuildGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamBuildGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A52DF49D87838B9D_METHOD_1_48ACAF3862CCC727_OFFSET))(a1);
	}
};
