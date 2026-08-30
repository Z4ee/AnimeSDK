#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A9DA900CAB43E70;
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F8D53E091C2E8A5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C74D550)

inline static constexpr unsigned int Class_1_F8D53E091C2E8A5D_TypeDefinitionIndex = 41570;

class Class_1_F8D53E091C2E8A5D : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EOLEFDMJNNE; // 0x10
	::System::String* NKNKNFNGHJC; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0A9DA900CAB43E70*>* PJIAPLDJHDL; // 0x20
	::System::Int32 OCPMLIBCHPD; // 0x28
	::System::Int32 DKMLGHNPODM; // 0x2C
	::System::Boolean OJPDDAOJJKC; // 0x30
	::System::Boolean PJGOCPDOAOL; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8D53E091C2E8A5D__CTOR_OFFSET))(this);
	}
};
