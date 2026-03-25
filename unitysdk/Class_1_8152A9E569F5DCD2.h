#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8152A9E569F5DCD2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17919B30)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_15B0FA99620E8418_OFFSET UNITYSDK_OFFSET(0x17919740)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17919950)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179192E0)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_825C592BA89AB3F2_OFFSET UNITYSDK_OFFSET(0x17919260)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179199F0)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17919530)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_E75A3DB2A8E875B6_OFFSET UNITYSDK_OFFSET(0x17919B80)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17919910)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17919A90)
#define CLASS_1_8152A9E569F5DCD2_METHOD_1_FF80234D8F224BE3_OFFSET UNITYSDK_OFFSET(0x17919590)
#define CLASS_1_8152A9E569F5DCD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17919EE0)

inline static constexpr unsigned int Class_1_8152A9E569F5DCD2_TypeDefinitionIndex = 11393;

class Class_1_8152A9E569F5DCD2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x220D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x220D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x220E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x8E70);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8152A9E569F5DCD2_TypeDefinitionIndex)->GetStaticField(0x8E71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>* Method_1_825C592BA89AB3F2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_825C592BA89AB3F2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*> Method_1_FF80234D8F224BE3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_FF80234D8F224BE3_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingEventRow* Method_1_15B0FA99620E8418(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_15B0FA99620E8418_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E75A3DB2A8E875B6(::RPG::GameCore::SwordTrainingEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_8152A9E569F5DCD2_METHOD_1_E75A3DB2A8E875B6_OFFSET))(a1);
	}
};
