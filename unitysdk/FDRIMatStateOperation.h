#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CustomDataPos.h"
#include "unitysdk/FDRIStateOperation.h"
#include "unitysdk/UnityEngine/Vector4.h"

class FiveDimRenderingItem;

#define FDRIMATSTATEOPERATION_METHOD_2_008C839AFEE3D573_OFFSET UNITYSDK_OFFSET(0x156D8A80)
#define FDRIMATSTATEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x156D8B00)

inline static constexpr unsigned int FDRIMatStateOperation_TypeDefinitionIndex = 47113;

class FDRIMatStateOperation : public ::FDRIStateOperation
{
public:
	::CustomDataPos customDataPos; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIMATSTATEOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_008C839AFEE3D573(::UnityEngine::Vector4& a1, ::CustomDataPos a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector4&, ::CustomDataPos, ::System::UInt32))((::PBYTE)hIl2Cpp + FDRIMATSTATEOPERATION_METHOD_2_008C839AFEE3D573_OFFSET))(a1, a2, a3);
	}
};
