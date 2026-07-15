#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E3EC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_METHOD_4_340DBF20D2D5A684_OFFSET UNITYSDK_OFFSET(0x1C2E3D50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_METHOD_4_739C21CC87B2B983_OFFSET UNITYSDK_OFFSET(0x1C2E3D10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E3D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHitSplitRatio_TypeDefinitionIndex = 22431;

	class SetDynamicValueByHitSplitRatio : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_739C21CC87B2B983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_METHOD_4_739C21CC87B2B983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_340DBF20D2D5A684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHitSplitRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_METHOD_4_340DBF20D2D5A684_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHITSPLITRATIO_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
