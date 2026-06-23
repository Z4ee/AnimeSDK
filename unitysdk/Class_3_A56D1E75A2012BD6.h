#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_A56D1E75A2012BD6_Struct_2_8D79CCD46FD839C3.h"

namespace UnityEngine::AI { class NavMeshObstacle; }

#define CLASS_3_A56D1E75A2012BD6_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15D16690)
#define CLASS_3_A56D1E75A2012BD6_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15D16770)
#define CLASS_3_A56D1E75A2012BD6_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15D16800)
#define CLASS_3_A56D1E75A2012BD6_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15D16640)
#define CLASS_3_A56D1E75A2012BD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D166E0)
#define CLASS_3_A56D1E75A2012BD6__CTOR_OFFSET UNITYSDK_OFFSET(0x15D16760)

inline static constexpr unsigned int Class_3_A56D1E75A2012BD6_TypeDefinitionIndex = 61206;

class Class_3_A56D1E75A2012BD6 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x23; // 0x0
	::UnityEngine::AI::NavMeshObstacle* Field_3_0; // 0x48
	::Class_3_A56D1E75A2012BD6_Struct_2_8D79CCD46FD839C3 Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A56D1E75A2012BD6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A56D1E75A2012BD6__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A56D1E75A2012BD6_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A56D1E75A2012BD6_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A56D1E75A2012BD6_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_A56D1E75A2012BD6* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_A56D1E75A2012BD6*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A56D1E75A2012BD6_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
