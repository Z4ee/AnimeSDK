#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AF8700EECA429FB6_METHOD_1_175FAA037C03E9B0_OFFSET UNITYSDK_OFFSET(0x12393320)
#define CLASS_1_AF8700EECA429FB6_METHOD_1_4AC52770211CE49D_OFFSET UNITYSDK_OFFSET(0x12393550)
#define CLASS_1_AF8700EECA429FB6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123936D0)
#define CLASS_1_AF8700EECA429FB6_METHOD_1_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x12393720)
#define CLASS_1_AF8700EECA429FB6__CTOR_OFFSET UNITYSDK_OFFSET(0x123937A0)

inline static constexpr unsigned int Class_1_AF8700EECA429FB6_TypeDefinitionIndex = 50199;

class Class_1_AF8700EECA429FB6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::FixPoint>* Field_1_1; // 0x10
	::RPG::GameCore::FixPoint Field_1_4; // 0x18
	::RPG::GameCore::FixPoint Field_1_3; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF8700EECA429FB6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_175FAA037C03E9B0(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AttackDamageType a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AF8700EECA429FB6_METHOD_1_175FAA037C03E9B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF8700EECA429FB6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF8700EECA429FB6_METHOD_1_CB7604B59F367726_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_4AC52770211CE49D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_AF8700EECA429FB6_METHOD_1_4AC52770211CE49D_OFFSET))(this, a1, a2);
	}
};
