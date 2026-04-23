#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FDB2D140BF0822AD_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x11E71610)
#define CLASS_2_FDB2D140BF0822AD__CTOR_OFFSET UNITYSDK_OFFSET(0x11E716B0)

inline static constexpr unsigned int Class_2_FDB2D140BF0822AD_TypeDefinitionIndex = 71278;

class Class_2_FDB2D140BF0822AD : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_2_0; // 0x18
	::System::Boolean Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDB2D140BF0822AD__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_FDB2D140BF0822AD_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
