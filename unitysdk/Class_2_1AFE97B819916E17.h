#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1AFE97B819916E17_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0xB7CA570)
#define CLASS_2_1AFE97B819916E17__CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA610)

inline static constexpr unsigned int Class_2_1AFE97B819916E17_TypeDefinitionIndex = 77208;

class Class_2_1AFE97B819916E17 : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LFAACOEFGPI; // 0x10
	::RPG::GameCore::ChimeraDuelFireBulletNode* EABKOHGCHFP; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AFE97B819916E17__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_1AFE97B819916E17_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
