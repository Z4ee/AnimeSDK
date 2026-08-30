#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_515CFECB00166B7F_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x178C9ED0)
#define CLASS_2_515CFECB00166B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x178C9F70)

inline static constexpr unsigned int Class_2_515CFECB00166B7F_TypeDefinitionIndex = 77221;

class Class_2_515CFECB00166B7F : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PIJFBMKEOIE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_515CFECB00166B7F__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_515CFECB00166B7F_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
