#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_718A51E22CB71EC4;
class Class_2_FE27D0FC265DDD96;
namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

#define CLASS_1_6F2598F82A312737_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13A24280)
#define CLASS_1_6F2598F82A312737_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x13A24240)
#define CLASS_1_6F2598F82A312737_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x13A24260)
#define CLASS_1_6F2598F82A312737_METHOD_1_FAD66108D9E5F015_OFFSET UNITYSDK_OFFSET(0x13A24310)
#define CLASS_1_6F2598F82A312737_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x13A24250)
#define CLASS_1_6F2598F82A312737_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x13A24270)
#define CLASS_1_6F2598F82A312737__CTOR_OFFSET UNITYSDK_OFFSET(0x13A24360)

inline static constexpr unsigned int Class_1_6F2598F82A312737_TypeDefinitionIndex = 50754;

class Class_1_6F2598F82A312737 : public ::System::Object
{
public:
	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>* _Source_k__BackingField; // 0x10
	::System::Int32 _ExecuteFrame_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ExecuteFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737_GET_EXECUTEFRAME_OFFSET))(this);
	}

	::System::Void set_ExecuteFrame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737_SET_EXECUTEFRAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>* get_Source()
	{
		return ((::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>*))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737_SET_SOURCE_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737_EXECUTE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAD66108D9E5F015(::Class_2_718A51E22CB71EC4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_718A51E22CB71EC4*))((::PBYTE)hIl2Cpp + CLASS_1_6F2598F82A312737_METHOD_1_FAD66108D9E5F015_OFFSET))(this, a1);
	}
};
