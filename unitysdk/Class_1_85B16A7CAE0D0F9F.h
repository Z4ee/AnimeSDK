#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONClass; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_77A05942BE8D62E0_OFFSET UNITYSDK_OFFSET(0x155A2CB0)
#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_7E0B5DD50CA50517_OFFSET UNITYSDK_OFFSET(0x155A32E0)
#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_9CA058C167B07A4D_OFFSET UNITYSDK_OFFSET(0x155A2D40)
#define CLASS_1_85B16A7CAE0D0F9F_METHOD_1_E999E4CA7B3623C8_OFFSET UNITYSDK_OFFSET(0x155A3270)

inline static constexpr unsigned int Class_1_85B16A7CAE0D0F9F_TypeDefinitionIndex = 83925;

class Class_1_85B16A7CAE0D0F9F : public ::System::Object
{
public:
	static ::System::Void Method_1_77A05942BE8D62E0(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_77A05942BE8D62E0_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_9CA058C167B07A4D(::System::Object* a1)
	{
		return ((::SimpleJSON::JSONNode*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_9CA058C167B07A4D_OFFSET))(a1);
	}

	static ::System::Void Method_1_E999E4CA7B3623C8(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_E999E4CA7B3623C8_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_7E0B5DD50CA50517(::SimpleJSON::JSONClass* a1)
	{
		return ((::System::String*(*)(::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_85B16A7CAE0D0F9F_METHOD_1_7E0B5DD50CA50517_OFFSET))(a1);
	}
};
