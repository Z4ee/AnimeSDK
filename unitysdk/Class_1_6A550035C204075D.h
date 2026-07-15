#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TalkBehaviorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6A550035C204075D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1849C4C0)
#define CLASS_1_6A550035C204075D_METHOD_1_1275A5B903EC6C67_OFFSET UNITYSDK_OFFSET(0x1849C510)
#define CLASS_1_6A550035C204075D_METHOD_1_4DE8A63A75C7A556_OFFSET UNITYSDK_OFFSET(0x1849C960)
#define CLASS_1_6A550035C204075D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1849C2F0)
#define CLASS_1_6A550035C204075D_METHOD_1_95483FF4E41F50A1_OFFSET UNITYSDK_OFFSET(0x1849C880)
#define CLASS_1_6A550035C204075D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1849C380)
#define CLASS_1_6A550035C204075D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1849C900)
#define CLASS_1_6A550035C204075D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1849C0C0)
#define CLASS_1_6A550035C204075D_METHOD_1_E261E628476EC624_OFFSET UNITYSDK_OFFSET(0x1849CAD0)
#define CLASS_1_6A550035C204075D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1849C080)
#define CLASS_1_6A550035C204075D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1849C420)
#define CLASS_1_6A550035C204075D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1849CC60)

inline static constexpr unsigned int Class_1_6A550035C204075D_TypeDefinitionIndex = 14607;

class Class_1_6A550035C204075D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A550035C204075D_TypeDefinitionIndex)->GetStaticField(0x3CC50);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A550035C204075D_TypeDefinitionIndex)->GetStaticField(0x3CC58);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A550035C204075D_TypeDefinitionIndex)->GetStaticField(0x3CC60);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A550035C204075D_TypeDefinitionIndex)->GetStaticField(0xA170);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A550035C204075D_TypeDefinitionIndex)->GetStaticField(0xA171);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1275A5B903EC6C67(::RPG::GameCore::TalkBehaviorRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TalkBehaviorRow*))((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_1275A5B903EC6C67_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>* Method_1_95483FF4E41F50A1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_95483FF4E41F50A1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*> Method_1_4DE8A63A75C7A556()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkBehaviorRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_4DE8A63A75C7A556_OFFSET))();
	}

	static ::RPG::GameCore::TalkBehaviorRow* Method_1_E261E628476EC624(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TalkBehaviorRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A550035C204075D_METHOD_1_E261E628476EC624_OFFSET))(a1);
	}
};
