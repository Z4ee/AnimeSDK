#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_6D7246FFA656A862_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16C2E970)
#define CLASS_3_6D7246FFA656A862_METHOD_3_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x16C2EA00)
#define CLASS_3_6D7246FFA656A862_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x16C2E980)
#define CLASS_3_6D7246FFA656A862_METHOD_3_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x16C2F050)
#define CLASS_3_6D7246FFA656A862_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x16C2F1B0)
#define CLASS_3_6D7246FFA656A862__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2E990)

inline static constexpr unsigned int Class_3_6D7246FFA656A862_TypeDefinitionIndex = 56348;

class Class_3_6D7246FFA656A862 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::String* Field_3_5; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_1; // 0x38
	::System::String* Field_3_0; // 0x40
	::MiHoYo::SDK::JSONObject* Field_3_2; // 0x48
	::System::Int32 Field_3_3; // 0x50
	::System::Int32 Field_3_4; // 0x54

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1, ::MiHoYo::SDK::JSONObject* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::MiHoYo::SDK::JSONObject*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D7246FFA656A862__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D7246FFA656A862_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D7246FFA656A862_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D7246FFA656A862_METHOD_3_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_3_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6D7246FFA656A862_METHOD_3_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D7246FFA656A862_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
