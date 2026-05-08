#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE886390)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE8863F0)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815_INVOKE_OFFSET UNITYSDK_OFFSET(0xE885C10)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815__CTOR_OFFSET UNITYSDK_OFFSET(0xE885C00)

inline static constexpr unsigned int Class_3_C2B262BAEE4F4CD0_Class_3_F4A64212AAD32815_TypeDefinitionIndex = 79096;

class Class_3_C2B262BAEE4F4CD0_Class_3_F4A64212AAD32815 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::IAsyncResult* BeginInvoke(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6, ::System::AsyncCallback* a7, ::System::Object* a8)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_3_F4A64212AAD32815_ENDINVOKE_OFFSET))(this, a1);
	}
};
