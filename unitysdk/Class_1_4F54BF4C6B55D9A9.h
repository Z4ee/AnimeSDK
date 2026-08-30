#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1190;
class Class_0_16E4307DCC419505_1192;

#define CLASS_1_4F54BF4C6B55D9A9_CLEAR_OFFSET UNITYSDK_OFFSET(0x15414BA0)
#define CLASS_1_4F54BF4C6B55D9A9_METHOD_1_95EC9293FD439850_OFFSET UNITYSDK_OFFSET(0x154148B0)
#define CLASS_1_4F54BF4C6B55D9A9_METHOD_1_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x15414A70)
#define CLASS_1_4F54BF4C6B55D9A9__CTOR_OFFSET UNITYSDK_OFFSET(0x15414CE0)

inline static constexpr unsigned int Class_1_4F54BF4C6B55D9A9_TypeDefinitionIndex = 73866;

class Class_1_4F54BF4C6B55D9A9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1190* LEFCNOJGDBP; // 0x10
	::Class_0_16E4307DCC419505_1192* GOHGJMFAMLH; // 0x18
	::System::Int64 EOBMFJGOIHB; // 0x20
	::System::Int32 AMFJIHAABBP; // 0x28
	::System::Int32 IBOIJPFPBIF; // 0x2C
	::System::Boolean DFHHKFNDECI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F54BF4C6B55D9A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_95EC9293FD439850(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4F54BF4C6B55D9A9_METHOD_1_95EC9293FD439850_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F54BF4C6B55D9A9_METHOD_1_D240830C442C70A4_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F54BF4C6B55D9A9_CLEAR_OFFSET))(this);
	}
};
