#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/OneBoneLayer.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace SimpleJSON { class JSONNode; }

#define BLEND2DDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x139920C0)
#define BLEND2DDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13990150)
#define BLEND2DDATA_FROMJSON_OFFSET UNITYSDK_OFFSET(0x139901F0)
#define BLEND2DDATA_TOBINARY_OFFSET UNITYSDK_OFFSET(0x13992150)
#define BLEND2DDATA_TOJSON_OFFSET UNITYSDK_OFFSET(0x13992040)
#define BLEND2DDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x139921E0)

inline static constexpr unsigned int Blend2dData_TypeDefinitionIndex = 82026;

class Blend2dData : public ::System::Object
{
public:
	::Il2CppArray<::OneBoneLayer>* OneBoneLayerData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEND2DDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLEND2DDATA_FROMFLX_OFFSET))(this, node);
	}

	::System::Boolean FromJson(::SimpleJSON::JSONNode* node)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + BLEND2DDATA_FROMJSON_OFFSET))(this, node);
	}

	::SimpleJSON::JSONNode* ToJson()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEND2DDATA_TOJSON_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + BLEND2DDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
	}

	::System::Boolean ToBinary(::Class_1_236FD73ABC492E3F* byteArray)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*))((::PBYTE)hIl2Cpp + BLEND2DDATA_TOBINARY_OFFSET))(this, byteArray);
	}
};
