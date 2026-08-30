#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1332;
namespace System { class String; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_REDDOT_REDDOTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDE15310)
#define RPG_CLIENT_REDDOT_REDDOTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDE159F0)

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotControl_TypeDefinitionIndex = 78702;

	class RedDotControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1332*>
	{
	public:
		// static const ::System::String* RootPrefabPath; // 0x0
		// static const ::System::String* NormalPrefabPath; // 0x0
		// static const ::System::String* NewPrefabPath; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1332*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1332*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REDDOT_REDDOTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
