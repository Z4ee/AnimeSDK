#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_NodeType_TypeDefinitionIndex = 43560;

	enum class HAPI_NodeType : ::System::Int32
	{
		HAPI_NODETYPE_ANY = -1,
		HAPI_NODETYPE_NONE = 0,
		HAPI_NODETYPE_OBJ = 1,
		HAPI_NODETYPE_SOP = 2,
		HAPI_NODETYPE_CHOP = 4,
		HAPI_NODETYPE_ROP = 8,
		HAPI_NODETYPE_SHOP = 16,
		HAPI_NODETYPE_COP = 32,
		HAPI_NODETYPE_VOP = 64,
		HAPI_NODETYPE_DOP = 128,
		HAPI_NODETYPE_TOP = 256,
	};
}
