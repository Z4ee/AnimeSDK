#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_2.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_5E2D533DC7C7E714;
class Class_1_D05699509194BF9B;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_11547817CAC659C4_METHOD_2_77FF2CD643D8D676_OFFSET UNITYSDK_OFFSET(0x1C5522C0)
#define CLASS_2_11547817CAC659C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C552400)

inline static constexpr unsigned int Class_2_11547817CAC659C4_TypeDefinitionIndex = 41777;

class Class_2_11547817CAC659C4 : public ::Class_1_FD893FD36F6A3A6D_2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11547817CAC659C4__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* Method_2_77FF2CD643D8D676(::Class_1_5E2D533DC7C7E714* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*))((::PBYTE)hIl2Cpp + CLASS_2_11547817CAC659C4_METHOD_2_77FF2CD643D8D676_OFFSET))(this, a1);
	}
};
