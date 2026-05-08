#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

namespace MoleMole::GalGame { class CheckResourceTitleActionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_AA0DD53E42B9A4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x134FD630)

inline static constexpr unsigned int Class_2_AA0DD53E42B9A4F2_TypeDefinitionIndex = 72469;

class Class_2_AA0DD53E42B9A4F2 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::CheckResourceTitleActionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_AA0DD53E42B9A4F2__CTOR_OFFSET))(this, a1);
	}
};
