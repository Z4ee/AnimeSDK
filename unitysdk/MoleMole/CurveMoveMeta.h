#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_539A5A7FAC22747B.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase.h"

#define MOLEMOLE_CURVEMOVEMETA_GET_IGNOREINCURVEMOVE_OFFSET UNITYSDK_OFFSET(0x14265890)
#define MOLEMOLE_CURVEMOVEMETA_GET_REVERTORIENTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x142658A0)
#define MOLEMOLE_CURVEMOVEMETA_METHOD_7_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0x142659D0)
#define MOLEMOLE_CURVEMOVEMETA_METHOD_7_BDBA00FB43D83ECB_OFFSET UNITYSDK_OFFSET(0x14265930)
#define MOLEMOLE_CURVEMOVEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x14265980)

namespace MoleMole
{
	inline static constexpr unsigned int CurveMoveMeta_TypeDefinitionIndex = 74238;

	class CurveMoveMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase
	{
	public:
		::System::Boolean _ignoreInCurveMove; // 0x30
		::System::Boolean _revertOrientationAxis; // 0x31
		::Enum_3_539A5A7FAC22747B _connectionOrientationMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreInCurveMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_GET_IGNOREINCURVEMOVE_OFFSET))(this);
		}

		::System::Boolean get_RevertOrientationAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_GET_REVERTORIENTATIONAXIS_OFFSET))(this);
		}

		::Enum_3_539A5A7FAC22747B Method_7_BDBA00FB43D83ECB()
		{
			return ((::Enum_3_539A5A7FAC22747B(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_METHOD_7_BDBA00FB43D83ECB_OFFSET))(this);
		}

		::System::Void Method_7_77E3CF907BA6F8B7(::Enum_3_539A5A7FAC22747B a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_539A5A7FAC22747B))((::PBYTE)hIl2Cpp + MOLEMOLE_CURVEMOVEMETA_METHOD_7_77E3CF907BA6F8B7_OFFSET))(this, a1);
		}
	};
}
