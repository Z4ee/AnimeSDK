#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_DFED526349DE5987_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1410D050)
#define CLASS_1_DFED526349DE5987_METHOD_1_6C181A437C0E739E_OFFSET UNITYSDK_OFFSET(0x1410D080)
#define CLASS_1_DFED526349DE5987_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1410D060)
#define CLASS_1_DFED526349DE5987__CTOR_OFFSET UNITYSDK_OFFSET(0x1410D070)

inline static constexpr unsigned int Class_1_DFED526349DE5987_TypeDefinitionIndex = 52148;

class Class_1_DFED526349DE5987 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::Enum_3_0F1B992870941C13_1 Field_1_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_0F1B992870941C13_1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + CLASS_1_DFED526349DE5987__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFED526349DE5987_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFED526349DE5987_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_6C181A437C0E739E(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DFED526349DE5987_METHOD_1_6C181A437C0E739E_OFFSET))(this, a1, a2, a3);
	}
};
