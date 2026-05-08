#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_700E393C573D3A0E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01E3578B80D3E1F9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14E40D70)
#define CLASS_1_01E3578B80D3E1F9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14E408A0)
#define CLASS_1_01E3578B80D3E1F9_METHOD_1_7493FC0605E5A625_OFFSET UNITYSDK_OFFSET(0x14E40920)
#define CLASS_1_01E3578B80D3E1F9_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x14E40DD0)
#define CLASS_1_01E3578B80D3E1F9__CTOR_OFFSET UNITYSDK_OFFSET(0x14E40FB0)

inline static constexpr unsigned int Class_1_01E3578B80D3E1F9_TypeDefinitionIndex = 63613;

class Class_1_01E3578B80D3E1F9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* Field_1_1; // 0x10
	::Enum_3_700E393C573D3A0E Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01E3578B80D3E1F9__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_01E3578B80D3E1F9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_01E3578B80D3E1F9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_01E3578B80D3E1F9_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7493FC0605E5A625(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_01E3578B80D3E1F9_METHOD_1_7493FC0605E5A625_OFFSET))(this, a1);
	}
};
