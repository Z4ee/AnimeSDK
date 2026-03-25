#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByAnd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DB4DEC7FE1D3EB9D_METHOD_3_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x168093E0)
#define CLASS_3_DB4DEC7FE1D3EB9D__CTOR_OFFSET UNITYSDK_OFFSET(0x16809290)

inline static constexpr unsigned int Class_3_DB4DEC7FE1D3EB9D_TypeDefinitionIndex = 33195;

class Class_3_DB4DEC7FE1D3EB9D : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByAnd* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::Class_2_A047D65884258648*>* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::MarbleByAnd* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByAnd*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_DB4DEC7FE1D3EB9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB4DEC7FE1D3EB9D_METHOD_3_F55212E77440B167_OFFSET))(this);
	}
};
