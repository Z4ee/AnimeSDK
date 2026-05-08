#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_0DB196DE3B98F87A_CLASS_1_994FDC3789BC644D_METHOD_1_5E2634EA487CD4EF_OFFSET UNITYSDK_OFFSET(0x18263C60)
#define CLASS_5_0DB196DE3B98F87A_CLASS_1_994FDC3789BC644D__CTOR_OFFSET UNITYSDK_OFFSET(0x18263C50)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_Class_1_994FDC3789BC644D_TypeDefinitionIndex = 56819;

class Class_5_0DB196DE3B98F87A_Class_1_994FDC3789BC644D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_CLASS_1_994FDC3789BC644D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E2634EA487CD4EF(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_CLASS_1_994FDC3789BC644D_METHOD_1_5E2634EA487CD4EF_OFFSET))(this, a1);
	}
};
