#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_044E6BF853F233B6.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_79AE422BA06F6D26_177;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_BALLGAMEOPTIONSWIDGET02CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17797EE0)

namespace MoleMole
{
	inline static constexpr unsigned int BallGameOptionsWidget02Context_TypeDefinitionIndex = 70719;

	class BallGameOptionsWidget02Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::Class_2_79AE422BA06F6D26_177*, ::System::Int32>* refreshAction; // 0x28
		::System::Int32 RefreshCount; // 0x30
		::System::Int32 Index; // 0x34
		::System::Int32 OriginalBulletID; // 0x38
		::Enum_3_044E6BF853F233B6 Usage; // 0x3C
		::System::Int32 BulletID; // 0x40
		::System::Boolean IsSelf; // 0x44
		::System::Boolean IsNew; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BALLGAMEOPTIONSWIDGET02CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
