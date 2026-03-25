#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spShadingNode; }
namespace System { class String; }

#define SIMPLYGON_SPMATERIAL_ADDMATERIALCHANNEL_OFFSET UNITYSDK_OFFSET(0x1836FE00)
#define SIMPLYGON_SPMATERIAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836FC80)
#define SIMPLYGON_SPMATERIAL_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1836FC60)
#define SIMPLYGON_SPMATERIAL_SETSHADINGNETWORK_OFFSET UNITYSDK_OFFSET(0x18370010)
#define SIMPLYGON_SPMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1835EB80)

namespace Simplygon
{
	inline static constexpr unsigned int spMaterial_TypeDefinitionIndex = 29552;

	class spMaterial : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIAL__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spMaterial* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spMaterial*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIAL_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIAL_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void AddMaterialChannel(::System::String* channelName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIAL_ADDMATERIALCHANNEL_OFFSET))(this, channelName);
		}

		::System::Void SetShadingNetwork(::System::String* channelName, ::Simplygon::spShadingNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Simplygon::spShadingNode*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMATERIAL_SETSHADINGNETWORK_OFFSET))(this, channelName, node);
		}
	};
}
