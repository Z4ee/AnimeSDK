#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D285321A8BA47AA_METHOD_1_161951D3C1CDFBE8_OFFSET UNITYSDK_OFFSET(0x152FE390)
#define CLASS_1_9D285321A8BA47AA_METHOD_1_301D07C4CEBB0226_OFFSET UNITYSDK_OFFSET(0x152FE610)
#define CLASS_1_9D285321A8BA47AA_METHOD_1_AB2B4EACC054EC9D_OFFSET UNITYSDK_OFFSET(0x152FE010)
#define CLASS_1_9D285321A8BA47AA_METHOD_1_FB4B10A9C408AA40_OFFSET UNITYSDK_OFFSET(0x152FE320)
#define CLASS_1_9D285321A8BA47AA_METHOD_1_FC0B2BB3E94EAAE2_OFFSET UNITYSDK_OFFSET(0x152FE080)

inline static constexpr unsigned int Class_1_9D285321A8BA47AA_TypeDefinitionIndex = 56405;

class Class_1_9D285321A8BA47AA : public ::System::Object
{
public:
	static ::System::Boolean Method_1_AB2B4EACC054EC9D(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D285321A8BA47AA_METHOD_1_AB2B4EACC054EC9D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FB4B10A9C408AA40(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D285321A8BA47AA_METHOD_1_FB4B10A9C408AA40_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FC0B2BB3E94EAAE2(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9D285321A8BA47AA_METHOD_1_FC0B2BB3E94EAAE2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_161951D3C1CDFBE8(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::RuntimeGroupInfo* a4, ::RPG::GameCore::HoyoTagContainer* a5)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + CLASS_1_9D285321A8BA47AA_METHOD_1_161951D3C1CDFBE8_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_301D07C4CEBB0226(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_9D285321A8BA47AA_METHOD_1_301D07C4CEBB0226_OFFSET))(a1, a2);
	}
};
