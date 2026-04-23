#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CutscenePropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18990980)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_251DA44E8D69E587_OFFSET UNITYSDK_OFFSET(0x189903C0)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x189907A0)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_50090B39AAC41B92_OFFSET UNITYSDK_OFFSET(0x18990090)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18990110)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_8764A3103C671127_OFFSET UNITYSDK_OFFSET(0x18990570)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18990840)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18990360)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_E1B45CD1D07F0CB6_OFFSET UNITYSDK_OFFSET(0x189909D0)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18990760)
#define CLASS_1_9EF6DFF4BE852C32_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x189908E0)
#define CLASS_1_9EF6DFF4BE852C32__CCTOR_OFFSET UNITYSDK_OFFSET(0x18990D30)

inline static constexpr unsigned int Class_1_9EF6DFF4BE852C32_TypeDefinitionIndex = 12384;

class Class_1_9EF6DFF4BE852C32 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF6DFF4BE852C32_TypeDefinitionIndex)->GetStaticField(0x21E40);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF6DFF4BE852C32_TypeDefinitionIndex)->GetStaticField(0x21E48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF6DFF4BE852C32_TypeDefinitionIndex)->GetStaticField(0x21E50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF6DFF4BE852C32_TypeDefinitionIndex)->GetStaticField(0x8700);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF6DFF4BE852C32_TypeDefinitionIndex)->GetStaticField(0x8701);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>* Method_1_50090B39AAC41B92()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_50090B39AAC41B92_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*> Method_1_251DA44E8D69E587()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_251DA44E8D69E587_OFFSET))();
	}

	static ::RPG::GameCore::CutscenePropRow* Method_1_8764A3103C671127(::System::String* a1)
	{
		return ((::RPG::GameCore::CutscenePropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_8764A3103C671127_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_E1B45CD1D07F0CB6(::RPG::GameCore::CutscenePropRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CutscenePropRow*))((::PBYTE)hIl2Cpp + CLASS_1_9EF6DFF4BE852C32_METHOD_1_E1B45CD1D07F0CB6_OFFSET))(a1);
	}
};
