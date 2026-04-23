#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AchievementDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8D698FE87022DF30_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18363190)
#define CLASS_1_8D698FE87022DF30_METHOD_1_1E5AB9347023D071_OFFSET UNITYSDK_OFFSET(0x183631E0)
#define CLASS_1_8D698FE87022DF30_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18362FB0)
#define CLASS_1_8D698FE87022DF30_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183629C0)
#define CLASS_1_8D698FE87022DF30_METHOD_1_750167F84A3A317B_OFFSET UNITYSDK_OFFSET(0x18362DF0)
#define CLASS_1_8D698FE87022DF30_METHOD_1_929FCD0B9E22A592_OFFSET UNITYSDK_OFFSET(0x18362940)
#define CLASS_1_8D698FE87022DF30_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18363050)
#define CLASS_1_8D698FE87022DF30_METHOD_1_B9F0F467F167F6C0_OFFSET UNITYSDK_OFFSET(0x18362C70)
#define CLASS_1_8D698FE87022DF30_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18362C10)
#define CLASS_1_8D698FE87022DF30_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18362F70)
#define CLASS_1_8D698FE87022DF30_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183630F0)
#define CLASS_1_8D698FE87022DF30__CCTOR_OFFSET UNITYSDK_OFFSET(0x18363500)

inline static constexpr unsigned int Class_1_8D698FE87022DF30_TypeDefinitionIndex = 10444;

class Class_1_8D698FE87022DF30 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D698FE87022DF30_TypeDefinitionIndex)->GetStaticField(0x2A5C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D698FE87022DF30_TypeDefinitionIndex)->GetStaticField(0x2A5C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D698FE87022DF30_TypeDefinitionIndex)->GetStaticField(0x2A5D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D698FE87022DF30_TypeDefinitionIndex)->GetStaticField(0xB530);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D698FE87022DF30_TypeDefinitionIndex)->GetStaticField(0xB531);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>* Method_1_929FCD0B9E22A592()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_929FCD0B9E22A592_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*> Method_1_B9F0F467F167F6C0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AchievementDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_B9F0F467F167F6C0_OFFSET))();
	}

	static ::RPG::GameCore::AchievementDataRow* Method_1_750167F84A3A317B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AchievementDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_750167F84A3A317B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1E5AB9347023D071(::RPG::GameCore::AchievementDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AchievementDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_8D698FE87022DF30_METHOD_1_1E5AB9347023D071_OFFSET))(a1);
	}
};
