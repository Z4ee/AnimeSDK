#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_4565DCF72DE284B9_METHOD_2_1FC94BA33A151EF7_OFFSET UNITYSDK_OFFSET(0x1286DA80)
#define CLASS_2_4565DCF72DE284B9_METHOD_2_221DC1B6077F2FAE_OFFSET UNITYSDK_OFFSET(0x1286DCA0)
#define CLASS_2_4565DCF72DE284B9_METHOD_2_48B21D1DB0B82321_OFFSET UNITYSDK_OFFSET(0x1286DFB0)
#define CLASS_2_4565DCF72DE284B9_METHOD_2_618D4BB5E449D8F5_OFFSET UNITYSDK_OFFSET(0x1286E040)
#define CLASS_2_4565DCF72DE284B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1286DC50)

inline static constexpr unsigned int Class_2_4565DCF72DE284B9_TypeDefinitionIndex = 60179;

class Class_2_4565DCF72DE284B9 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1FC94BA33A151EF7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_1FC94BA33A151EF7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* Method_2_221DC1B6077F2FAE()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_221DC1B6077F2FAE_OFFSET))(this);
	}

	::System::Void Method_2_48B21D1DB0B82321(::MoleMole::UIUrbanMapTrackLineWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapTrackLineWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_48B21D1DB0B82321_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_2_618D4BB5E449D8F5()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4565DCF72DE284B9_METHOD_2_618D4BB5E449D8F5_OFFSET))(this);
	}
};
