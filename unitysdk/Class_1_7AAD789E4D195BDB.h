#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace System { class String; }

#define CLASS_1_7AAD789E4D195BDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5D1E00)
#define CLASS_1_7AAD789E4D195BDB_METHOD_1_7F03B34224173121_OFFSET UNITYSDK_OFFSET(0xA5D1C90)
#define CLASS_1_7AAD789E4D195BDB_METHOD_1_9961319058EA1D8D_OFFSET UNITYSDK_OFFSET(0xA5D1D30)
#define CLASS_1_7AAD789E4D195BDB_METHOD_1_A700FFDDAA173FF2_OFFSET UNITYSDK_OFFSET(0xA5D1E80)
#define CLASS_1_7AAD789E4D195BDB__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D1BF0)

inline static constexpr unsigned int Class_1_7AAD789E4D195BDB_TypeDefinitionIndex = 65002;

class Class_1_7AAD789E4D195BDB : public ::System::Object
{
public:
	::RPG::Client::LRUCache_2<::System::String*, ::RPG::Client::CameraBlendCurve*>* Field_1_0; // 0x10
	::RPG::Client::CameraBlendCurve* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAD789E4D195BDB__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::CameraBlendCurve* Method_1_7F03B34224173121(::System::String* a1)
	{
		return ((::RPG::Client::CameraBlendCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7AAD789E4D195BDB_METHOD_1_7F03B34224173121_OFFSET))(a1);
	}

	::RPG::Client::CameraBlendCurve* Method_1_9961319058EA1D8D(::System::String* a1)
	{
		return ((::RPG::Client::CameraBlendCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7AAD789E4D195BDB_METHOD_1_9961319058EA1D8D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AAD789E4D195BDB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A700FFDDAA173FF2(::RPG::Client::CameraBlendCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraBlendCurve*))((::PBYTE)hIl2Cpp + CLASS_1_7AAD789E4D195BDB_METHOD_1_A700FFDDAA173FF2_OFFSET))(this, a1);
	}
};
