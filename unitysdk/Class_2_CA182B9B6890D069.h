#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A6771CD0CA2718D.h"
#include "unitysdk/Class_1_5A6771CD0CA2718D_Struct_2_9F53C0D70CA4F0C0.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_917C1393532E000D;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_CA182B9B6890D069_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x18657A90)
#define CLASS_2_CA182B9B6890D069_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18657670)
#define CLASS_2_CA182B9B6890D069_METHOD_2_9ACB04833BA4FFB3_OFFSET UNITYSDK_OFFSET(0x18657B00)
#define CLASS_2_CA182B9B6890D069_METHOD_2_B4A91A4ACDF9D75F_OFFSET UNITYSDK_OFFSET(0x18657A00)
#define CLASS_2_CA182B9B6890D069_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x18657760)
#define CLASS_2_CA182B9B6890D069_METHOD_2_FC6ACBB707E61DA3_OFFSET UNITYSDK_OFFSET(0x18657860)
#define CLASS_2_CA182B9B6890D069_METHOD_2_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0x186577A0)
#define CLASS_2_CA182B9B6890D069__CTOR_OFFSET UNITYSDK_OFFSET(0x18657750)

inline static constexpr unsigned int Class_2_CA182B9B6890D069_TypeDefinitionIndex = 39788;

class Class_2_CA182B9B6890D069 : public ::Class_1_5A6771CD0CA2718D
{
public:
	::Class_1_5A6771CD0CA2718D_Struct_2_9F53C0D70CA4F0C0 Field_2_0; // 0x58
	::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32>* Field_2_3; // 0x68
	::UnityEngine::Vector3 Field_2_2; // 0x70
	::UnityEngine::Vector3 Field_2_1; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_917C1393532E000D* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_917C1393532E000D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Method_2_FC6ACBB707E61DA3(::MoleMole::TextureSheetAnimCurveParam* a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetAnimCurveParam*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_FC6ACBB707E61DA3_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_CA182B9B6890D069* Method_2_B4A91A4ACDF9D75F()
	{
		return ((::Class_2_CA182B9B6890D069*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_B4A91A4ACDF9D75F_OFFSET))();
	}

	static ::Class_2_CA182B9B6890D069* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_CA182B9B6890D069*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_64B6514CFF8F8D76_OFFSET))();
	}

	::System::Void Method_2_9ACB04833BA4FFB3(::MoleMole::TextureSheetAnimCurveParam* a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3, ::System::Int32 a4, ::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32>* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetAnimCurveParam*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Int32, ::System::Action_3<::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_METHOD_2_9ACB04833BA4FFB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
