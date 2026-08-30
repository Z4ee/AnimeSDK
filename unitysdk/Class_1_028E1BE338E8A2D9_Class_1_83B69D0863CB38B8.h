#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_028E1BE338E8A2D9_Struct_2_BBD456EBC9087BC2_11.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_21.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_028E1BE338E8A2D9_CLASS_1_83B69D0863CB38B8__CTOR_OFFSET UNITYSDK_OFFSET(0xC00A3A0)

inline static constexpr unsigned int Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8_TypeDefinitionIndex = 70994;

class Class_1_028E1BE338E8A2D9_Class_1_83B69D0863CB38B8 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* GJIJLFGEEFC; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>* JFALBIAGHEE; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_CC45B4503679E14E_21>* HNLPIMGCPOP; // 0x20
	::Il2CppArray<::UnityEngine::Renderer*>* HBDHMCEOMIA; // 0x28
	::Class_1_1342B57709FD7AC5* EGOMDGLJIGG; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Class_1_028E1BE338E8A2D9_Struct_2_BBD456EBC9087BC2_11>*>* IKNPEONKANB; // 0x38
	::System::Boolean KHPDMOINFOM; // 0x40
	::System::Boolean AHKNHOCAKBG; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_028E1BE338E8A2D9_CLASS_1_83B69D0863CB38B8__CTOR_OFFSET))(this);
	}
};
