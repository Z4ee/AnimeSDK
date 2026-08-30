#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class Match3Config; }
namespace RPG::GameCore::Match3 { class PieceConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E55E00A0254799D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B73D0)

inline static constexpr unsigned int Class_1_7E55E00A0254799D_TypeDefinitionIndex = 40946;

class Class_1_7E55E00A0254799D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* LECMLKMFCPL; // 0x10
	::RPG::GameCore::Match3::Match3Config* LFPIDNKDMOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::Match3::PieceConfig*>* MHBPGEBBFJE; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::BombCreateConfig*>* ONPIFMABMAI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E55E00A0254799D__CTOR_OFFSET))(this);
	}
};
