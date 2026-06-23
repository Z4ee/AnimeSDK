#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5111A21FA8B904B1;

#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B478A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooGroupPhotoRowContext_TypeDefinitionIndex = 40872;

	class UIBangbooGroupPhotoRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_5111A21FA8B904B1* CheckPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
