#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelFireEffectNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7EB40BD7A3E6722A_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x19FC01B0)
#define CLASS_2_7EB40BD7A3E6722A__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC0250)

inline static constexpr unsigned int Class_2_7EB40BD7A3E6722A_TypeDefinitionIndex = 77208;

class Class_2_7EB40BD7A3E6722A : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
	::RPG::GameCore::ChimeraDuelFireEffectNode* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB40BD7A3E6722A__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_7EB40BD7A3E6722A_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
