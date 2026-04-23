#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_718A51E22CB71EC4;
class Class_2_FE27D0FC265DDD96;
namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

#define CLASS_1_1CBCCF81A23ECF1B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x96A7340)
#define CLASS_1_1CBCCF81A23ECF1B_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x96A7300)
#define CLASS_1_1CBCCF81A23ECF1B_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x96A7320)
#define CLASS_1_1CBCCF81A23ECF1B_METHOD_1_FAD66108D9E5F015_OFFSET UNITYSDK_OFFSET(0x96A73D0)
#define CLASS_1_1CBCCF81A23ECF1B_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x96A7310)
#define CLASS_1_1CBCCF81A23ECF1B_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x96A7330)
#define CLASS_1_1CBCCF81A23ECF1B__CTOR_OFFSET UNITYSDK_OFFSET(0x96A7420)

inline static constexpr unsigned int Class_1_1CBCCF81A23ECF1B_TypeDefinitionIndex = 50087;

class Class_1_1CBCCF81A23ECF1B : public ::System::Object
{
public:
	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>* _Source_k__BackingField; // 0x10
	::System::Int32 _ExecuteFrame_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ExecuteFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B_GET_EXECUTEFRAME_OFFSET))(this);
	}

	::System::Void set_ExecuteFrame(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B_SET_EXECUTEFRAME_OFFSET))(this, value);
	}

	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>* get_Source()
	{
		return ((::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_FE27D0FC265DDD96*>*))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B_SET_SOURCE_OFFSET))(this, value);
	}

	::System::Void Execute(::Class_2_FE27D0FC265DDD96* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE27D0FC265DDD96*))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B_EXECUTE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAD66108D9E5F015(::Class_2_718A51E22CB71EC4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_718A51E22CB71EC4*))((::PBYTE)hIl2Cpp + CLASS_1_1CBCCF81A23ECF1B_METHOD_1_FAD66108D9E5F015_OFFSET))(this, a1);
	}
};
