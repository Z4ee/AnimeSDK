#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarServantSkillLinkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0CC28CF521DB24DE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1848C780)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_198700B9BB8E9991_OFFSET UNITYSDK_OFFSET(0x1848C1E0)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1848C5A0)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1848BF30)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_A640312E6FAB308E_OFFSET UNITYSDK_OFFSET(0x1848C390)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1848C640)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1848C180)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_DCC05161423074DC_OFFSET UNITYSDK_OFFSET(0x1848C7D0)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_DE76EAD89DB4D734_OFFSET UNITYSDK_OFFSET(0x1848BEB0)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1848C560)
#define CLASS_1_0CC28CF521DB24DE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1848C6E0)
#define CLASS_1_0CC28CF521DB24DE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1848CB30)

inline static constexpr unsigned int Class_1_0CC28CF521DB24DE_TypeDefinitionIndex = 12111;

class Class_1_0CC28CF521DB24DE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CC28CF521DB24DE_TypeDefinitionIndex)->GetStaticField(0x30030);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantSkillLinkRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantSkillLinkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CC28CF521DB24DE_TypeDefinitionIndex)->GetStaticField(0x30038);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CC28CF521DB24DE_TypeDefinitionIndex)->GetStaticField(0x30040);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CC28CF521DB24DE_TypeDefinitionIndex)->GetStaticField(0xC0D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CC28CF521DB24DE_TypeDefinitionIndex)->GetStaticField(0xC0D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantSkillLinkRow*>* Method_1_DE76EAD89DB4D734()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantSkillLinkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_DE76EAD89DB4D734_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantSkillLinkRow*> Method_1_198700B9BB8E9991()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantSkillLinkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_198700B9BB8E9991_OFFSET))();
	}

	static ::RPG::GameCore::AvatarServantSkillLinkRow* Method_1_A640312E6FAB308E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarServantSkillLinkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_A640312E6FAB308E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_DCC05161423074DC(::RPG::GameCore::AvatarServantSkillLinkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarServantSkillLinkRow*))((::PBYTE)hIl2Cpp + CLASS_1_0CC28CF521DB24DE_METHOD_1_DCC05161423074DC_OFFSET))(a1);
	}
};
