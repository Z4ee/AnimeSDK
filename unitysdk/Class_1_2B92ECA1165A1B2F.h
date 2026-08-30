#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }

#define CLASS_1_2B92ECA1165A1B2F_METHOD_1_7FB527F01618719E_OFFSET UNITYSDK_OFFSET(0xBABF340)
#define CLASS_1_2B92ECA1165A1B2F_METHOD_1_95B948F3B1DB5D12_OFFSET UNITYSDK_OFFSET(0xBABF5D0)
#define CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xBABF4E0)
#define CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_2_OFFSET UNITYSDK_OFFSET(0xBABF530)
#define CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_3_OFFSET UNITYSDK_OFFSET(0xBABF580)
#define CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xBABF490)
#define CLASS_1_2B92ECA1165A1B2F__CTOR_OFFSET UNITYSDK_OFFSET(0xBABF420)

inline static constexpr unsigned int Class_1_2B92ECA1165A1B2F_TypeDefinitionIndex = 65315;

class Class_1_2B92ECA1165A1B2F : public ::System::Object
{
public:
	::RPG::GameCore::GridFightNodeTemplateConfigRow* PICBEJCAFHO; // 0x10
	::RPG::GameCore::GridFightStageRouteConfigRow* GJKNPHJJDGJ; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_2B92ECA1165A1B2F* Method_1_7FB527F01618719E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_2B92ECA1165A1B2F*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F_METHOD_1_7FB527F01618719E_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F_METHOD_1_AA2D3E889C8A52CA_3_OFFSET))(this);
	}

	::RPG::GameCore::GridFightNodeType Method_1_95B948F3B1DB5D12()
	{
		return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B92ECA1165A1B2F_METHOD_1_95B948F3B1DB5D12_OFFSET))(this);
	}
};
