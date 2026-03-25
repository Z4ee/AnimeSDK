#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16E2A6C0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_1821B67E0666A564_OFFSET UNITYSDK_OFFSET(0x16E2A090)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_1899066B20554A0B_OFFSET UNITYSDK_OFFSET(0x16E2A2D0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_241FF0B99878E0AE_OFFSET UNITYSDK_OFFSET(0x16E2A210)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16E2A4E0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_60842E075CD9FD9B_OFFSET UNITYSDK_OFFSET(0x16E2A710)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16E29DE0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_741C3FA1FB37DB8E_OFFSET UNITYSDK_OFFSET(0x16E29D60)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_8CCA9E762DC3BDC4_OFFSET UNITYSDK_OFFSET(0x16E2AA70)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16E2A580)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16E2A030)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E2A4A0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16E2A620)
#define CLASS_1_4C23F31E14C8A3D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E2AB60)

inline static constexpr unsigned int Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex = 13613;

class Class_1_4C23F31E14C8A3D6 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x19A50);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x19A58);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x19A60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x7420);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x7421);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>* Method_1_741C3FA1FB37DB8E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_741C3FA1FB37DB8E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*> Method_1_1821B67E0666A564()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_1821B67E0666A564_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>, ::RPG::GameCore::RogueMagicScepterRow*> Method_1_241FF0B99878E0AE()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>, ::RPG::GameCore::RogueMagicScepterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_241FF0B99878E0AE_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicScepterRow* Method_1_1899066B20554A0B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_1899066B20554A0B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_60842E075CD9FD9B(::RPG::GameCore::RogueMagicScepterRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_60842E075CD9FD9B_OFFSET))(a1);
	}

	static ::RPG::GameCore::MazeBuffRow* Method_1_8CCA9E762DC3BDC4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_8CCA9E762DC3BDC4_OFFSET))(a1, a2);
	}
};
