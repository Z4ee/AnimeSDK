#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleRemarkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_84413F0E99E312FD_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19798080)
#define CLASS_1_84413F0E99E312FD_METHOD_1_81923FEB4555A891_OFFSET UNITYSDK_OFFSET(0x19797860)
#define CLASS_1_84413F0E99E312FD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19797EB0)
#define CLASS_1_84413F0E99E312FD_METHOD_1_95E730F128969CE7_OFFSET UNITYSDK_OFFSET(0x197980D0)
#define CLASS_1_84413F0E99E312FD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19797F40)
#define CLASS_1_84413F0E99E312FD_METHOD_1_B309349C6C52FC4E_OFFSET UNITYSDK_OFFSET(0x19797B70)
#define CLASS_1_84413F0E99E312FD_METHOD_1_CAE85204E2B158E4_OFFSET UNITYSDK_OFFSET(0x19797CE0)
#define CLASS_1_84413F0E99E312FD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19797B10)
#define CLASS_1_84413F0E99E312FD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x197978E0)
#define CLASS_1_84413F0E99E312FD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19797E70)
#define CLASS_1_84413F0E99E312FD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19797FE0)
#define CLASS_1_84413F0E99E312FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x19798440)

inline static constexpr unsigned int Class_1_84413F0E99E312FD_TypeDefinitionIndex = 12899;

class Class_1_84413F0E99E312FD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84413F0E99E312FD_TypeDefinitionIndex)->GetStaticField(0x46020);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84413F0E99E312FD_TypeDefinitionIndex)->GetStaticField(0x46028);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_84413F0E99E312FD_TypeDefinitionIndex)->GetStaticField(0x46030);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84413F0E99E312FD_TypeDefinitionIndex)->GetStaticField(0xCA30);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_84413F0E99E312FD_TypeDefinitionIndex)->GetStaticField(0xCA31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>* Method_1_81923FEB4555A891()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_81923FEB4555A891_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*> Method_1_B309349C6C52FC4E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRemarkConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_B309349C6C52FC4E_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleRemarkConfigRow* Method_1_CAE85204E2B158E4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRoleRemarkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_CAE85204E2B158E4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_95E730F128969CE7(::RPG::GameCore::GridFightRoleRemarkConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleRemarkConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_84413F0E99E312FD_METHOD_1_95E730F128969CE7_OFFSET))(a1);
	}
};
