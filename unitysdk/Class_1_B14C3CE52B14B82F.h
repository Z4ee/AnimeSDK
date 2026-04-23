#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B14C3CE52B14B82F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19126730)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_2A0A44078B17F7CC_OFFSET UNITYSDK_OFFSET(0x19126780)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19126550)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_641B35F643825D7B_OFFSET UNITYSDK_OFFSET(0x19126210)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19125F60)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191265F0)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_AFEDD77B6C221C6F_OFFSET UNITYSDK_OFFSET(0x19125EE0)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191261B0)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_EC25181555DC4488_OFFSET UNITYSDK_OFFSET(0x19126390)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19126510)
#define CLASS_1_B14C3CE52B14B82F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19126690)
#define CLASS_1_B14C3CE52B14B82F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19126AA0)

inline static constexpr unsigned int Class_1_B14C3CE52B14B82F_TypeDefinitionIndex = 11787;

class Class_1_B14C3CE52B14B82F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14C3CE52B14B82F_TypeDefinitionIndex)->GetStaticField(0x3FBC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14C3CE52B14B82F_TypeDefinitionIndex)->GetStaticField(0x3FBC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14C3CE52B14B82F_TypeDefinitionIndex)->GetStaticField(0x3FBD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14C3CE52B14B82F_TypeDefinitionIndex)->GetStaticField(0xE500);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B14C3CE52B14B82F_TypeDefinitionIndex)->GetStaticField(0xE501);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>* Method_1_AFEDD77B6C221C6F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_AFEDD77B6C221C6F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*> Method_1_641B35F643825D7B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_641B35F643825D7B_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingStoryLineRow* Method_1_EC25181555DC4488(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_EC25181555DC4488_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2A0A44078B17F7CC(::RPG::GameCore::SwordTrainingStoryLineRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStoryLineRow*))((::PBYTE)hIl2Cpp + CLASS_1_B14C3CE52B14B82F_METHOD_1_2A0A44078B17F7CC_OFFSET))(a1);
	}
};
