#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class ServantRowData; }
namespace System { class String; }

#define CLASS_1_1DB2E9E79963A9A0_METHOD_1_081B82FB494CD83F_OFFSET UNITYSDK_OFFSET(0x87AFF70)
#define CLASS_1_1DB2E9E79963A9A0_METHOD_1_34A82700F46F269B_OFFSET UNITYSDK_OFFSET(0x87AF970)
#define CLASS_1_1DB2E9E79963A9A0_METHOD_1_5DF0BEF00847060A_OFFSET UNITYSDK_OFFSET(0x87AF6C0)
#define CLASS_1_1DB2E9E79963A9A0_METHOD_1_86D4F832745D4A47_OFFSET UNITYSDK_OFFSET(0x87AFCC0)
#define CLASS_1_1DB2E9E79963A9A0_METHOD_1_B3ADBC2B20B02A45_OFFSET UNITYSDK_OFFSET(0x87AFDD0)
#define CLASS_1_1DB2E9E79963A9A0_METHOD_1_F3E072974F507E27_OFFSET UNITYSDK_OFFSET(0x87AF520)
#define CLASS_1_1DB2E9E79963A9A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x87B00E0)
#define CLASS_1_1DB2E9E79963A9A0__CTOR_OFFSET UNITYSDK_OFFSET(0x87B00D0)

inline static constexpr unsigned int Class_1_1DB2E9E79963A9A0_TypeDefinitionIndex = 47730;

class Class_1_1DB2E9E79963A9A0 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DB2E9E79963A9A0_TypeDefinitionIndex)->GetStaticField(0x34F80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0__CCTOR_OFFSET))();
	}

	static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_F3E072974F507E27(::System::String* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0_METHOD_1_F3E072974F507E27_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_34A82700F46F269B(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::RPG::GameCore::ServantRowData* a4)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::System::UInt32, ::RPG::GameCore::ServantRowData*))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0_METHOD_1_34A82700F46F269B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_B3ADBC2B20B02A45(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::RPG::Client::IAvatarInfoProvider* a4)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::System::UInt32, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0_METHOD_1_B3ADBC2B20B02A45_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> Method_1_081B82FB494CD83F(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0_METHOD_1_081B82FB494CD83F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::UInt32 Method_1_86D4F832745D4A47(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0_METHOD_1_86D4F832745D4A47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DF0BEF00847060A(::System::String* a1, ::System::Int32& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_1DB2E9E79963A9A0_METHOD_1_5DF0BEF00847060A_OFFSET))(a1, a2, a3);
	}
};
