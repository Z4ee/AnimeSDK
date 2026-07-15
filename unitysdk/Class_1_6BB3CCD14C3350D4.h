#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }

#define CLASS_1_6BB3CCD14C3350D4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18B9D930)
#define CLASS_1_6BB3CCD14C3350D4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18B9D940)
#define CLASS_1_6BB3CCD14C3350D4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18B9D920)
#define CLASS_1_6BB3CCD14C3350D4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18B9D910)
#define CLASS_1_6BB3CCD14C3350D4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9D950)

inline static constexpr unsigned int Class_1_6BB3CCD14C3350D4_TypeDefinitionIndex = 47410;

class Class_1_6BB3CCD14C3350D4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C

	::System::Void _ctor(::UnityEngine::ComputeShader* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6BB3CCD14C3350D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB3CCD14C3350D4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB3CCD14C3350D4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB3CCD14C3350D4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB3CCD14C3350D4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}
};
