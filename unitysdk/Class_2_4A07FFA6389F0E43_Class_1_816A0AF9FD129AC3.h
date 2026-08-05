#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_2_4A07FFA6389F0E43;
namespace MoleMole { class ITextureSheetConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_4A07FFA6389F0E43_CLASS_1_816A0AF9FD129AC3_METHOD_1_E02B58F3103F82E9_OFFSET UNITYSDK_OFFSET(0x15FC63A0)
#define CLASS_2_4A07FFA6389F0E43_CLASS_1_816A0AF9FD129AC3__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC6390)

inline static constexpr unsigned int Class_2_4A07FFA6389F0E43_Class_1_816A0AF9FD129AC3_TypeDefinitionIndex = 53783;

class Class_2_4A07FFA6389F0E43_Class_1_816A0AF9FD129AC3 : public ::System::Object
{
public:
	::System::Action_2<::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode>* Field_1_1; // 0x10
	::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Color, ::System::Int32>* Field_1_0; // 0x18
	::Class_2_4A07FFA6389F0E43* Field_1_3; // 0x20
	::System::Action* Field_1_5; // 0x28
	::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32>* Field_1_7; // 0x30
	::System::Nullable_1<::System::Int32> Field_1_2; // 0x38
	::System::Boolean Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A07FFA6389F0E43_CLASS_1_816A0AF9FD129AC3__CTOR_OFFSET))(this);
	}

	::Class_1_5A6771CD0CA2718D* Method_1_E02B58F3103F82E9(::MoleMole::ITextureSheetConfig* a1, ::System::Int32& a2)
	{
		return ((::Class_1_5A6771CD0CA2718D*(*)(::PVOID, ::MoleMole::ITextureSheetConfig*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_4A07FFA6389F0E43_CLASS_1_816A0AF9FD129AC3_METHOD_1_E02B58F3103F82E9_OFFSET))(this, a1, a2);
	}
};
