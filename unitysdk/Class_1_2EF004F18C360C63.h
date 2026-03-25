#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleSwitchHandRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2EF004F18C360C63_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x179C7C50)
#define CLASS_1_2EF004F18C360C63_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179C7A70)
#define CLASS_1_2EF004F18C360C63_METHOD_1_58752C537D671E2C_OFFSET UNITYSDK_OFFSET(0x179C78B0)
#define CLASS_1_2EF004F18C360C63_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179C7480)
#define CLASS_1_2EF004F18C360C63_METHOD_1_7CC13B9534F958D8_OFFSET UNITYSDK_OFFSET(0x179C7CA0)
#define CLASS_1_2EF004F18C360C63_METHOD_1_7F19731A64080213_OFFSET UNITYSDK_OFFSET(0x179C7400)
#define CLASS_1_2EF004F18C360C63_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179C7B10)
#define CLASS_1_2EF004F18C360C63_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179C76D0)
#define CLASS_1_2EF004F18C360C63_METHOD_1_DCFA11AE257751C3_OFFSET UNITYSDK_OFFSET(0x179C7730)
#define CLASS_1_2EF004F18C360C63_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179C7A30)
#define CLASS_1_2EF004F18C360C63_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179C7BB0)
#define CLASS_1_2EF004F18C360C63__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C7FB0)

inline static constexpr unsigned int Class_1_2EF004F18C360C63_TypeDefinitionIndex = 12884;

class Class_1_2EF004F18C360C63 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EF004F18C360C63_TypeDefinitionIndex)->GetStaticField(0x26620);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EF004F18C360C63_TypeDefinitionIndex)->GetStaticField(0x26628);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EF004F18C360C63_TypeDefinitionIndex)->GetStaticField(0x26630);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EF004F18C360C63_TypeDefinitionIndex)->GetStaticField(0xC860);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EF004F18C360C63_TypeDefinitionIndex)->GetStaticField(0xC861);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>* Method_1_7F19731A64080213()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_7F19731A64080213_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*> Method_1_DCFA11AE257751C3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_DCFA11AE257751C3_OFFSET))();
	}

	static ::RPG::GameCore::MazePuzzleSwitchHandRow* Method_1_58752C537D671E2C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MazePuzzleSwitchHandRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_58752C537D671E2C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7CC13B9534F958D8(::RPG::GameCore::MazePuzzleSwitchHandRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MazePuzzleSwitchHandRow*))((::PBYTE)hIl2Cpp + CLASS_1_2EF004F18C360C63_METHOD_1_7CC13B9534F958D8_OFFSET))(a1);
	}
};
