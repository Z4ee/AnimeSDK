#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FD611945730E269E;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelCreateChimeraNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DDF1B764466C79E6_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x11653AE0)
#define CLASS_2_DDF1B764466C79E6__CTOR_OFFSET UNITYSDK_OFFSET(0x11653B60)

inline static constexpr unsigned int Class_2_DDF1B764466C79E6_TypeDefinitionIndex = 63216;

class Class_2_DDF1B764466C79E6 : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_2_1; // 0x10
	::RPG::GameCore::ChimeraDuelCreateChimeraNode* Field_2_2; // 0x18
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF1B764466C79E6__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_14* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*))((::PBYTE)hIl2Cpp + CLASS_2_DDF1B764466C79E6_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
