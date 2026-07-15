#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelRoundRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5A249C6C9CE03A24_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B800B20)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_113D4FC68E1E3AEF_OFFSET UNITYSDK_OFFSET(0x1B800780)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_7C9CEA5E1C6FC072_OFFSET UNITYSDK_OFFSET(0x1B800340)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B800950)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_A1210675705330F2_OFFSET UNITYSDK_OFFSET(0x1B800650)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B8009E0)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B8005F0)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B8003C0)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B800910)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B800A80)
#define CLASS_1_5A249C6C9CE03A24_METHOD_1_FFA79E78878A36F3_OFFSET UNITYSDK_OFFSET(0x1B800B70)
#define CLASS_1_5A249C6C9CE03A24__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B800E90)

inline static constexpr unsigned int Class_1_5A249C6C9CE03A24_TypeDefinitionIndex = 10742;

class Class_1_5A249C6C9CE03A24 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A249C6C9CE03A24_TypeDefinitionIndex)->GetStaticField(0x64E60);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A249C6C9CE03A24_TypeDefinitionIndex)->GetStaticField(0x64E68);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A249C6C9CE03A24_TypeDefinitionIndex)->GetStaticField(0x64E70);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A249C6C9CE03A24_TypeDefinitionIndex)->GetStaticField(0x13660);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A249C6C9CE03A24_TypeDefinitionIndex)->GetStaticField(0x13661);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>* Method_1_7C9CEA5E1C6FC072()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_7C9CEA5E1C6FC072_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*> Method_1_A1210675705330F2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRoundRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_A1210675705330F2_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelRoundRow* Method_1_113D4FC68E1E3AEF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelRoundRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_113D4FC68E1E3AEF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FFA79E78878A36F3(::RPG::GameCore::ChimeraDuelRoundRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelRoundRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A249C6C9CE03A24_METHOD_1_FFA79E78878A36F3_OFFSET))(a1);
	}
};
