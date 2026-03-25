#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C7BAE0)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C7B900)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_5B6F2E786064998A_OFFSET UNITYSDK_OFFSET(0x16C7B570)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C7B2C0)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_6C73A1B64BFD0D08_OFFSET UNITYSDK_OFFSET(0x16C7B240)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_6CBCFE08FDF4A051_OFFSET UNITYSDK_OFFSET(0x16C7BB30)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_7150A5775955BE12_OFFSET UNITYSDK_OFFSET(0x16C7B6F0)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C7B9A0)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C7B510)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C7B8C0)
#define CLASS_1_C0200DDE3DECFD4A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C7BA40)
#define CLASS_1_C0200DDE3DECFD4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C7BE40)

inline static constexpr unsigned int Class_1_C0200DDE3DECFD4A_TypeDefinitionIndex = 10418;

class Class_1_C0200DDE3DECFD4A : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0200DDE3DECFD4A_TypeDefinitionIndex)->GetStaticField(0x47A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0200DDE3DECFD4A_TypeDefinitionIndex)->GetStaticField(0x47A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0200DDE3DECFD4A_TypeDefinitionIndex)->GetStaticField(0x47B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0200DDE3DECFD4A_TypeDefinitionIndex)->GetStaticField(0x2710);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0200DDE3DECFD4A_TypeDefinitionIndex)->GetStaticField(0x2711);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>* Method_1_6C73A1B64BFD0D08()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_6C73A1B64BFD0D08_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*> Method_1_5B6F2E786064998A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_5B6F2E786064998A_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelChimeraPresetRow* Method_1_7150A5775955BE12(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelChimeraPresetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_7150A5775955BE12_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6CBCFE08FDF4A051(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraPresetRow*))((::PBYTE)hIl2Cpp + CLASS_1_C0200DDE3DECFD4A_METHOD_1_6CBCFE08FDF4A051_OFFSET))(a1);
	}
};
